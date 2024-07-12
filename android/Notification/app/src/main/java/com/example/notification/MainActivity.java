package com.example.notification;

import android.app.Notification;
import android.app.NotificationManager;
import android.graphics.Bitmap;
import android.graphics.Picture;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.NotificationCompat;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        Button sendNotifion = findViewById(R.id.send_notice);
        sendNotifion.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {
        if (v.getId() == R.id.send_notice){
            Log.d("debuger","button clicked");
            NotificationManager nm = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);

            Notification notification = new NotificationCompat.Builder(this)
                    .setContentText("contentteext")
                    .setContentTitle("titlehhhhj")
                    .setWhen(System.currentTimeMillis())
                    .setSmallIcon(R.mipmap.ic_launcher)
                    .build();
            Log.d("debuger","notification build ok");
            nm.notify(1,notification);

            Log.d("debuger","notice");
        }
    }
}