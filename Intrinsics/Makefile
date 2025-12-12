flags = -mavx2
file = arr_time_comp.cpp
bin_file = main.exe

final : main.exe
	@echo "Executing...."
	./$(bin_file)

main.exe : $(file)
	g++ $(file) -o $(bin_file) $(flags)

clean : 
	@echo "Cleaning up...."
	del main.exe 2>nul