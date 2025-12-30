#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);
    std::string file_name = argv[1];
    std::ifstream input_file(file_name.c_str());
    if (!input_file)
        return (1);
    std::string file_res = file_name + ".replace";
   
    std::ofstream output_file(file_res.c_str());
    if (!output_file)
        return (1);

    std::string line;
    std::string str1 = argv[2];
    std::string str2 = argv[3];
	if (str1 == "")
		return 1;
	std::getline(input_file, line, '\0');
	if (str1 == str2)
	{
 	   output_file << line;
	   return 0;
	}
    size_t pos = 0;
    while ((pos = line.find(str1, pos)) != std::string::npos)
    {
        line.erase(pos, str1.size());
        line.insert(pos, str2);
        pos = pos + str2.size();
    }
    output_file << line;
}
