package com.example.ccalljava;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("ccalljava");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv =findViewById(R.id.sample_text);
        tv.setText(stringFromJNI());
//        testStatic();
        threadDemo();
//        People p =  new People();
//        threadDemoInstance(p);
    }


    public void methodOne(){
        //方式一：set 和 get方法
        People people = new People();
        people.setListener(new People.SuccessListener() {
            @Override
            public void success() {
                System.out.println("真棒！");
            }
        });
        JNIPeople(people);
    }

    public void methodTwo(){
        JNIPeopleFanshe();
    }
    /**
     * A native method that is implemented by the 'ccalljava' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    native void JNIPeople(People people);

    native void JNIPeopleFanshe();

    native void staticDemo();

    public static void testStatic(){
        System.out.println("----静态方法！");
    }

    native void threadDemo();

    native void threadDemoInstance(People people);
}