package com.example.test1;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.IntProperty;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    private ImageView imageView;
    private Button button;
    private TextView textView;
    private Button change;
    private Button save;
    private EditText psd;
    private EditText phone;
    private CheckBox rem;
    private SharedPreferences sharedPreferences;

    private int[] imgs = {R.drawable.f1,R.drawable.f2,R.drawable.f3,R.drawable.f4,R.drawable.f5,R.drawable.f6,
            R.drawable.f7,R.drawable.f8,R.drawable.f9,R.drawable.f10,R.drawable.f11,R.drawable.f12,R.drawable.f13,
            R.drawable.f14,R.drawable.f15,R.drawable.f16,R.drawable.f17,R.drawable.f18,R.drawable.f19,
            R.drawable.f20};
    private int index = 0;

    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        initView();
        initData();

    }

    private void initData() {
        if (sharedPreferences == null) {
            sharedPreferences = getApplication().getSharedPreferences("config",Context.MODE_PRIVATE);
        }
        phone.setText(sharedPreferences.getString("phone",""));
        psd.setText(sharedPreferences.getString("psd",""));
        rem.setChecked(sharedPreferences.getBoolean("rem",false));
    }

    private void initView() {
        imageView = findViewById(R.id.imageView);

        button = findViewById(R.id.button1);
        button.setOnClickListener(this);

        change = findViewById(R.id.change);
        change.setOnClickListener(this);

        textView = findViewById(R.id.text1);


        phone = findViewById(R.id.phone);
        psd = findViewById(R.id.psd);
        rem = findViewById(R.id.rem);
        rem.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                if (isChecked) {
                    sharedPreferences = getApplicationContext().getSharedPreferences("config", Context.MODE_PRIVATE);
                    SharedPreferences.Editor editor = sharedPreferences.edit();
                    editor.putString("phone",phone.getText().toString());
                    editor.putString("psd",psd.getText().toString());
                    editor.commit();
                }
            }
        });
        save = findViewById(R.id.save);
        save.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {
        if (v.getId() == button.getId()) {
            if ("ON".equals(textView.getText())) {
                textView.setText("OFF");
            } else {
                textView.setText("ON");
            }
            ++index;
            index %= 20;
            imageView.setImageResource(imgs[index]);
        } else if (v.getId() == change.getId()) {
            Intent intent = new Intent();
            intent.setClass(getApplicationContext(), ShowInfo.class);
            this.startActivity(intent);
        } else if (v.getId() == save.getId()) {
            Intent intent = new Intent();
            intent.setClass(getApplicationContext(), SaveData.class);
            this.startActivity(intent);
        }
    }

}