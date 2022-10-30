package com.example.opencl;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import com.example.opencl.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
//        System.loadLibrary("cgrouprc");
//        System.loadLibrary("dl_android");
//        System.loadLibrary("vndksupport");
//        System.loadLibrary("utils");
//        System.loadLibrary("m");
//        System.loadLibrary("log");
//        System.loadLibrary("dl");
//        System.loadLibrary("cutils");
//        System.loadLibrary("c");
//        System.loadLibrary("c++");
//        System.loadLibrary("base");
//        System.loadLibrary("OpenCL");
        System.loadLibrary("native-lib");
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
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}