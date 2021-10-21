package com.example.ccalljava;

public class People {
    private String name;
    private int age;

//    public People(){}

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public void initSuccess(){
        listener.success();
    }

    private SuccessListener listener;
    public void setListener(SuccessListener listener){
        this.listener = listener;
    }

    interface SuccessListener{
        public void success();
    }
}

