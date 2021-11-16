package kw.test.demo;

import androidx.appcompat.app.AppCompatActivity;

import android.content.res.AssetFileDescriptor;
import android.content.res.AssetManager;
import android.media.MediaPlayer;
import android.os.Bundle;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.widget.TextView;

import java.io.IOException;

public class MainActivity extends AppCompatActivity {
    private SurfaceView surfaceView;
    private SurfaceHolder holder;
    MediaPlayer mediaPlayer;
    AssetManager assetMgr;
    static {
        System.loadLibrary("native_media_jni");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }

    public native void createEngine();
    public static native boolean createStreamingMediaPlayer(AssetManager assetManager,
                                                            String filename);

    public void methodOne(){
        assetMgr = getApplication().getAssets();
        surfaceView = findViewById(R.id.surface);
        holder = surfaceView.getHolder();
        mediaPlayer = new MediaPlayer();
        try {
            AssetFileDescriptor clipFd = assetMgr.openFd("clips/NativeMedia.ts");
            mediaPlayer.setDataSource(clipFd.getFileDescriptor(),
                    clipFd.getStartOffset(),
                    clipFd.getLength());
            clipFd.close();
            mediaPlayer.prepareAsync();

        } catch (IOException e) {
            e.printStackTrace();
        }
        mediaPlayer.setOnPreparedListener(new MediaPlayer.OnPreparedListener() {
            @Override
            public void onPrepared(MediaPlayer mp) {
                mp.start();

                mediaPlayer.setDisplay(holder);
            }
        });
        mediaPlayer.setOnVideoSizeChangedListener(new MediaPlayer.OnVideoSizeChangedListener() {
            @Override
            public void onVideoSizeChanged(MediaPlayer mp, int width, int height) {

            }
        });
    }
}
