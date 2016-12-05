#ifndef EXAM_H
#define EXAM_H

class CCex {
private:
    char *name;
    char *boss;
    int kil;

    friend void OutputInfo (CCex &section);

public:
    CCex ();
    CCex (char *n, char *b, int k);
    CCex (CCex &cex);

    void SetName(char *n);
    char *GetName();
    void SetBoss(char *b);
    char *GetBoss();
    void SetKil(int k);
    int GetKil();

    ~CCex ();
};

#endif
