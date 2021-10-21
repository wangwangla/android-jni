package com.example.ccalljava;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import com.example.ccalljava.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'ccalljava' library on application startup.
    static {
        System.loadLibrary("ccalljava");
    }

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Example of a call to a native method
        TextView tv = binding.sampleText;
        tv.setText(stringFromJNI());

        //方式一：set 和 get方法
        People people = new People();
        people.setListener(new People.SuccessListener() {
            @Override
            public void success() {
                System.out.println(
                        "真棒！"
                );
            }
        });

    }

    /**
     * A native method that is implemented by the 'ccalljava' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    native void JNIPeople(People people);

    native void JNIPeopleFanshe();
}