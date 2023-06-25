//theory of computation
//dfa that accepts atleast 2 strings or more
//alphabet = {a,b}
import java.util.*;
public class dfa1
{
    
static int dfa =0;
   static void state0 (char n)
    {
        if ((n=='a')||(n=='A')||(n=='b')||(n=='B'))
        dfa=1;
        
    }
    static void state1 (char n)
    {
        if ((n=='a')||(n=='A')||(n=='b')||(n=='B'))
        dfa=2;
        
    }
    static void state2 (char n)
    {
        if ((n=='a')||(n=='A')||(n=='b')||(n=='B'))
        dfa=2;
        
    }
    static boolean isAccept(String strr)
    {   
        char str[] =strr.toCharArray();
        for(int i=0;i<str.length;i++)
        {
            if (dfa==0)
            state0(str[i]);
            else if (dfa==1)
            state1(str[i]);
            else 
            state2(str[i]);
        }
        return (dfa==2);
    }
	public static void main(String[] args) {
	Scanner sobj = new Scanner(System.in);
    System.out.println("Enter a string consisting a and b");
    String str=sobj.next();
    if (isAccept(str)==true)
    System.out.println("Accepted");
    else
    System.out.println("not Accepted");
    
	}
}
