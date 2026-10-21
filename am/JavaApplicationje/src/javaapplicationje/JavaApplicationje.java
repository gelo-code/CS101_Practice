import javax.swing.*;
import java.awt.*;

public class Activity2 extends JFrame {

    // Input fields
    JTextField txtID = new JTextField();
    JTextField txtName = new JTextField();
    JTextField txtAge = new JTextField();
    JTextField txtCourse = new JTextField();

    // Main buttons
    JButton btnAdd = new JButton("Add");
    JButton btnEdit = new JButton("Edit");
    JButton btnSave = new JButton("Save");
    JButton btnCancel = new JButton("Cancel");
    JButton btnBrowse = new JButton("Browse");
    JButton btnView = new JButton("View");
    JButton btnEndView = new JButton("End View");

    // Navigation buttons
    JButton btnFirst = new JButton("First");
    JButton btnPrevious = new JButton("Previous");
    JButton btnNext = new JButton("Next");
    JButton btnLast = new JButton("Last");

    public Activity2() {
        setTitle("Activity #2 - Student Information");
        setSize(550, 450);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        JPanel panel = new JPanel(new GridLayout(0, 2, 10, 10));
        panel.setBorder(BorderFactory.createEmptyBorder(
                20, 20, 20, 20));

        // Input fields
        panel.add(new JLabel("Student ID:"));
        panel.add(txtID);

        panel.add(new JLabel("Name:"));
        panel.add(txtName);

        panel.add(new JLabel("Age:"));
        panel.add(txtAge);

        panel.add(new JLabel("Course:"));
        panel.add(txtCourse);

        // Main buttons
        panel.add(btnAdd);
        panel.add(btnEdit);
        panel.add(btnSave);
        panel.add(btnCancel);
        panel.add(btnBrowse);
        panel.add(btnView);
        panel.add(btnEndView);

        // Navigation buttons
        panel.add(btnFirst);
        panel.add(btnPrevious);
        panel.add(btnNext);
        panel.add(btnLast);

        add(panel);

        // Initial state
        setEditMode(false);
        setViewMode(false);

        // Rule 1: Add or Edit clicked
        btnAdd.addActionListener(e -> setEditMode(true));
        btnEdit.addActionListener(e -> setEditMode(true));

        // Rule 2: Save or Cancel clicked
        btnSave.addActionListener(e -> {
            JOptionPane.showMessageDialog(
                    this, "Information saved!");
            setEditMode(false);
        });

        btnCancel.addActionListener(e -> setEditMode(false));

        // Rule 3: View clicked
        btnView.addActionListener(e -> setViewMode(true));

        // Rule 4: End View clicked
        btnEndView.addActionListener(e -> setViewMode(false));
    }

    // Enable or disable editing controls
    private void setEditMode(boolean enabled) {
        txtID.setEnabled(enabled);
        txtName.setEnabled(enabled);
        txtAge.setEnabled(enabled);
        txtCourse.setEnabled(enabled);

        btnSave.setEnabled(enabled);
        btnCancel.setEnabled(enabled);
        btnBrowse.setEnabled(enabled);

        btnAdd.setEnabled(!enabled);
        btnEdit.setEnabled(!enabled);
    }

    // Enable or disable viewing controls
    private void setViewMode(boolean viewing) {
        btnFirst.setEnabled(viewing);
        btnPrevious.setEnabled(viewing);
        btnNext.setEnabled(viewing);
        btnLast.setEnabled(viewing);

        btnEndView.setEnabled(viewing);
        btnView.setEnabled(!viewing);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            new Activity2().setVisible(true);
        });
    }
}
