package kw.test.demo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tv = findViewById(R.id.sample_text);
        tv.setText(stringFromJNI());

        int i=0;
        if(i){

        }
        if(i==0){

        }

        float f = 10.0F;
        if (f == 10){

        }
    }
    public native String stringFromJNI();
}
