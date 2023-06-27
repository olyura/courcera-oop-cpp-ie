    static bool CompareStudents(Student s1, Student s2) {
      if ((s1.name == s2.name) &&
          (s1.student_id == s2.student_id)) {
        return true;
      }
      else {
        return false;
      }
    }