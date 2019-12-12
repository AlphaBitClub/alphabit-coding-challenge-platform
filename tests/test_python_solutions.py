import subprocess
import glob
import unittest


class NumbersTest(unittest.TestCase):

    def test_python(self):
        problems = glob.glob("problems/*")
        for problem in problems:
            script_path = glob.glob(
                "{}/submissions/accepted/*.py".format(problem))[0]
            test_case_in = glob.glob("{}/data/secret/*.in".format(problem))
            test_case_ans = glob.glob("{}/data/secret/*.ans".format(problem))

            # sort test cases
            test_case_in.sort()
            test_case_ans.sort()

            for tc_in, tc_ans in zip(test_case_in, test_case_ans):
                test_info = dict()
                test_info['problem'] = problem.split("/")[-1]
                test_info['input'] = tc_in.split("/")[-1]
                test_info['answer'] = tc_ans.split("/")[-1]

                with self.subTest(**test_info):
                    cmd = "python {} < {}".format(script_path, tc_in)
                    with open(tc_ans, "rb") as f:
                        expected_result = f.read().strip()

                    result = subprocess.check_output(
                        cmd, shell=True, stderr=subprocess.STDOUT
                    ).strip()

                    self.assertEqual(result, expected_result)


if __name__ == '__main__':
    unittest.main()
