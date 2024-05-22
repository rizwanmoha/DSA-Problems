import java.util.*;

import javax.sound.midi.Soundbank;
public class Test{
    public static void main(String [] args){
        Scanner sc= new Scanner(System.in);
        String str= sc.nextLine();  
    
        int n = str.length();

        String ans = "";
        for(int i=0;i<n;i++){
            if(str.charAt(i)=='a' || str.charAt(i)=='A'){
                continue;
            }
            else{
                ans+=str.charAt(i);
            }
        }

        System.out.println(ans);

    }
}