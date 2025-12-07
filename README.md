# Hospital-patient-queue-management-using-Queue-data-structure
# 🏥 Hospital Patient Queue Management System

This is a simple *C++ console-based application* that simulates a hospital patient queue management system.  
It allows hospital staff to add patients, serve them in order, search by ID, count total patients, and display the queue.

---

## 📌 Features
- *Add Patient*: Enter patient details (ID, Name, Health Issue, Appointment Time) and add them to the queue.
- *Serve Patient*: Serve the patient at the front of the queue (FIFO order).
- *Search Patient by ID*: Find patient details using their unique ID.
- *Count Patients*: Display the total number of patients currently in the queue.
- *Display Patients*: Show all patients in the queue with their details.
- *Exit*: Quit the program safely.

---

## 🛠 Technologies Used
- *Language*: C++
- *Data Structure*: std::queue (FIFO queue for patient management)

---

## 🚀 How to Run
1. Clone or download this repository.
2. Compile the program using a C++ compiler:
   ```bash
   g++ hospital_queue.cpp -o hospital_queue
