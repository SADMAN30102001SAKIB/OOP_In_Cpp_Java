import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class MyFrameX extends JFrame implements ActionListener {
    Container c;
    Font fn = new Font("Arial", Font.BOLD, 20);
    Font fn2 = new Font("Arial", Font.ITALIC, 20);
    JLabel lableLogin = new JLabel("Login");
    JTextField textLogin = new JTextField();
    JLabel lablePassword = new JLabel("Password");
    JPasswordField passLogin = new JPasswordField();
    JButton btnSubmit = new JButton("Submit");
    JButton btnRefresh = new JButton("Refresh");
    JLabel lableDisplay = new JLabel("");
    String myLogin = "admin";
    String myPassword = "1234";

    public MyFrameX() {
        c = this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.DARK_GRAY);
        lableLogin.setBounds(100, 50, 70, 35);
        lableLogin.setFont(fn);
        lableLogin.setForeground(Color.WHITE);
        textLogin.setBounds(210, 50, 220, 35);
        textLogin.setFont(fn2);
        lablePassword.setBounds(100, 100, 95, 35);
        lablePassword.setFont(fn);
        lablePassword.setForeground(Color.WHITE);
        passLogin.setBounds(210, 100, 220, 35);
        btnSubmit.setBounds(210, 150, 100, 35);
        btnSubmit.setFont(fn);
        btnSubmit.setForeground(Color.MAGENTA);
        btnRefresh.setBounds(320, 150, 110, 35);
        btnRefresh.setFont(fn);
        lableDisplay.setBounds(210, 220, 300, 35);
        lableDisplay.setFont(fn);
        lableDisplay.setForeground(Color.WHITE);
        c.add(lableLogin);
        c.add(textLogin);
        c.add(lablePassword);
        c.add(passLogin);
        c.add(btnSubmit);
        c.add(btnRefresh);
        c.add(lableDisplay);
        btnSubmit.addActionListener(this);
        btnRefresh.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == btnRefresh) {
            textLogin.setText("");
            passLogin.setText("");
            lableDisplay.setText("Enter Username & Password.");
        }

        if (e.getSource() == btnSubmit) {
            String inputLogin = textLogin.getText();
            String inputPassword = String.copyValueOf(passLogin.getPassword());
            if (inputLogin.equals(myLogin) && inputPassword.equals(myPassword)) {
                lableDisplay.setText("Login Successful!");
            } else {
                lableDisplay.setText("Invalid Username or Password!");
            }
        }
    }
}

public class CSE3 {
    public static void main(String[] args) {
        MyFrameX frame = new MyFrameX();
        frame.setTitle("Login Form");
        frame.setBounds(200, 200, 600, 550);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}