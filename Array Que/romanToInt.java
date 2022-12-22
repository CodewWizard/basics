public class romanToInt {
    public static void main(String[] args) {
//        System.out.println(romanToInt("CMIV"));
        int x = 5, y = 7;
        System.out.println(x ^ y);
    }

    public static int romanToInt(String s) {
        int ans = 0;
        int i = 0;
//        while (i < s.length()){
            if(s.subSequence(0, 2) == "CM"){
                System.out.println("Ye");
            }
        if(s.subSequence(2, 4) == "IV"){
            System.out.println("Ye");
        }
//            i++;
//        }
        return 1;
    }
}
