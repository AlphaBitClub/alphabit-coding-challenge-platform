import java.util.ArrayList;
import java.util.Scanner;

public class QueueMachine {
    public static int ticketNumber = 0;
    public static ArrayList<String> queue = new ArrayList<String>();


    public static void addNew(){
        ticketNumber++;
        queue.add(String.valueOf(ticketNumber));
    }

    public static void cancel(int nbOrder){
        int index = queue.indexOf(String.valueOf(nbOrder));
        queue.remove(index);
    }

    public static void show(String index){
        switch (index) {
            case "FIRST":
                System.out.println(queue.get(0));
                break;
            case "LAST":
                System.out.println(queue.get(queue.size()-1));
                break;
            default:
                String q = queue.toString().replace(", ", " ").replaceAll("([\\[\\]])", "");
                System.out.println(q.length()>0?  q : "0");
        }
    }
    public static void next(){
        if(queue.size()>0){
            queue.remove(0);
        }
    }

    public static void main(String[] args) {
        ArrayList<String> commands = new ArrayList<String>();
        int nbCommands = 0;

        Scanner sc = new Scanner(System.in);
        nbCommands = Integer.parseInt(sc.nextLine());
        // getting the commands
        for(int i=0 ; i<nbCommands; i++){
            commands.add(sc.nextLine().strip());
        }   

        // executing commands 
        for (String command : commands) {

            if(command.equals("NEW")){
                addNew();
            }else{
                if (command.contains("CANCEL")) {
                    int nbOrder = Integer.parseInt(command.split(" ")[1]);
                    cancel(nbOrder);
                    
                } else {
                    if (command.contains("SHOW")) {
                        String index = command.split(" ")[1];
                        show(index);
                    } else{
                        next();
                    }
                }
            }
        }
        sc.close();
    }
}