import os

def rename_files_in_directory(directory):
    # Iterate over all files in the directory
    for filename in os.listdir(directory):
        # Separate the base filename and the extension
        base, ext = os.path.splitext(filename)
        
        # Skip files that do not match the pattern modcom_X.X.c
        if ext == ".c" and base.startswith("modcom_"):
            # Replace dots with underscores in the base filename
            new_base = base.replace('.', '_')
            
            # Create the new filename
            new_filename = new_base + ext
            
            # Get full paths
            old_file = os.path.join(directory, filename)
            new_file = os.path.join(directory, new_filename)
            
            # Rename the file
            os.rename(old_file, new_file)
            print(f'Renamed: {old_file} to {new_file}')

        # Handle .test.json files
        elif filename.endswith(".test.json") and base.startswith("modcom_"):
            # Replace dots with underscores in the base filename
            new_base = base.replace('.', '_').replace('_test', '')
            
            # Create the new filename
            new_filename = new_base + '.test.json'
            
            # Get full paths
            old_file = os.path.join(directory, filename)
            new_file = os.path.join(directory, new_filename)
            
            # Rename the file
            os.rename(old_file, new_file)
            print(f'Renamed: {old_file} to {new_file}')

# Specify the directory
directory = './codern'

# Run the renaming function
rename_files_in_directory(directory)
