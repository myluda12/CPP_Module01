#include <iostream>
#include <fstream>


void ft_cherche_replace(std::string line, char **argv)
{
    int pos;
    std::string cut;
    int lenght_s1;
    int lenght_line;
    std::string s2;
    std::string s1;

    s2 = argv[3];
    s1 = argv[2];
    lenght_s1 = s1.length();

    while ( (pos = line.find(s1)) != -1 )
    {
        lenght_line = line.length();
         cut =  cut + line.substr(0,pos);
         cut = cut + s2;
         line = line.substr(pos + lenght_s1,lenght_line);
    }
    cut = cut + line;
    std::cout << "cut:  " << cut << std::endl;
    std::ofstream ofs("file.txt", std::ofstream::out);
    ofs << cut;
    ofs.close();
}

int main(int argc, char **argv)
{
    std::string line;
    std::string originaltext;



    if (argc != 4)
    {
        std::cout << "error in parameters <filename> <s1> <s2>" << std::endl;
    }
    else
    {
        std::ifstream ifs(argv[1]);
        if (ifs.is_open())
        {
            while(getline(ifs,line))
            {
                originaltext = originaltext + line +  "\n";
            }
            if(line[0] == '\0')
                std::cout << "file empty " << std::endl;
            originaltext.resize(originaltext.size() - 1);
            ifs.close();
        }
        else
        {
            std::cout << "error in opening the file" << std::endl;
            exit(0);
        }
        ft_cherche_replace(originaltext,argv);
    }
    return 0;
}