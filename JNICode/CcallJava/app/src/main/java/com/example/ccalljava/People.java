package com.example.ccalljava;

public class People {
    private String name;
    private int age;

    public People(){
        System.out.println("------------  初始化");
    }

    public void setName(String name) {
        System.out.println("------------  setName"+name);
        this.name = name;
    }

    public void setAge(int age) {
        System.out.println("------------  setAge"+age);
        this.age = age;
    }

    public String getName() {
        System.out.println("------------  getName"+name);
        return name;
    }

    public int getAge() {
        System.out.println("------------  getAge"+age);
        return age;
    }

    public void initSuccess(){
        System.out.println("------------  success");
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

