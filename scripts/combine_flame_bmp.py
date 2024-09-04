import os

# Replace with the list of your file names or paths
directory = "bmps/"
file_list = ["ogflame.bin", "redflame.bin", "iceflame.bin", "whiteflame.bin"]  # Add all your files here
output_file = "final_output/flames.bin"

# Define constants
file_size = 0x20  # Length of each input file
offset_increment = 0x20  # Offset between each file's start in the output file

# Open the output file in binary write mode
with open(output_file, "wb") as out_f:
    for index, file_name in enumerate(file_list):
        # Calculate the current offset where the file data should start
        current_offset = index * offset_increment

        # Write zero-padding up to the current offset
        out_f.write(b'\x00' * (current_offset - out_f.tell()))

        # Read the content of the current file
        with open(directory + file_name, "rb") as in_f:
            file_content = in_f.read(file_size)
            out_f.write(file_content)

print(f"All files have been combined into {output_file}.")