package kw.test.demo;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.app.Activity;
import android.app.NativeActivity;
import android.content.Context;
import android.os.Bundle;
import android.util.AttributeSet;
import android.view.InputQueue;
import android.view.SurfaceHolder;
import android.view.View;
import android.view.ViewTreeObserver;
import android.widget.TextView;

public class MainActivity extends Activity implements SurfaceHolder.Callback2,
        InputQueue.Callback, ViewTreeObserver.OnGlobalLayoutListener {
    public static final String META_DATA_LIB_NAME = "android.app.lib_name";

    static class NativeContentView extends View {
        NativeActivity mActivity;

        public NativeContentView(Context context) {
            super(context);
        }

        public NativeContentView(Context context, AttributeSet attrs) {
            super(context, attrs);
        }
    }

    public MainActivity(){

    }
    @Override
    public void onInputQueueCreated(InputQueue queue) {

    }

    @Override
    public void onInputQueueDestroyed(InputQueue queue) {

    }
    @Override
    public void surfaceRedrawNeeded(@NonNull SurfaceHolder holder) {

    }

    @Override
    public void surfaceCreated(@NonNull SurfaceHolder holder) {

    }

    @Override
    public void surfaceChanged(@NonNull SurfaceHolder holder, int format, int width, int height) {

    }

    @Override
    public void surfaceDestroyed(@NonNull SurfaceHolder holder) {

    }

    @Override
    public void onGlobalLayout() {

    }
}
