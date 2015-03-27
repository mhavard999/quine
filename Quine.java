public class Quine {
    public static String repr(String s){
        String t = "\"";
        char c;
        for (int i=0; i<s.length(); i++){
            c=s.charAt(i);
            switch (c){
            case '\\':
                t += "\\\\";
                break;
            case '\"':
                t += "\\\"";
                break;
            case '\n':
                t += "\\n";
                break;
            default:
                t += c;
            }
        }
        t += "\"";
        return t;
    }

    public static void main(String[] args){
        String firstbit = "public class Quine {\n    public static String repr(String s){\n        String t = \"\\\"\";\n        char c;\n        for (int i=0; i<s.length(); i++){\n            c=s.charAt(i);\n            switch (c){\n            case '\\\\':\n                t += \"\\\\\\\\\";\n                break;\n            case '\\\"':\n                t += \"\\\\\\\"\";\n                break;\n            case '\\n':\n                t += \"\\\\n\";\n                break;\n            default:\n                t += c;\n            }\n        }\n        t += \"\\\"\";\n        return t;\n    }\n\n    public static void main(String[] args){\n        String firstbit = ";
        String first_line = "String second_line = firstbit + repr(firstbit) + \";\\n        String first_line = \" + repr(first_line) + \";\\n        \"+ first_line + \"\\n        System.out.println(second_line);\\n    }\\n}\";";
        String second_line = firstbit + repr(firstbit) + ";\n        String first_line = " + repr(first_line) + ";\n        "+ first_line + "\n        System.out.println(second_line);\n    }\n}";
        System.out.println(second_line);
    }
}
