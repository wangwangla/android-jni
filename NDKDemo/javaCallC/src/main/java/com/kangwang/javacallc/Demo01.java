package com.kangwang.javacallc;

public class Demo01 {
    static {
        System.loadLibrary("javacallc");
    }
    public void printMsg(){
        System.out.println(stringFromJNI());
    }

    public native String stringFromJNI();
}
