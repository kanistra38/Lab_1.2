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

    ~CCex ();
};


#endif
