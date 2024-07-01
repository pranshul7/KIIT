import os
from PIL import Image

# Define the directory path of the dataset
dataset_path = 'C:/A/code/VSC/python/test/DevanagariHandwrittenCharacterDataset'

# Define the path of the output directory to save the cropped images
output_path = 'C:/A/code/VSC/python/test/cropped_DevanagariHandwrittenCharacterDataset'

# Traverse through the directory structure and crop all the images
for directory in os.listdir(dataset_path):
    if directory == 'Train' or directory == 'Test':
        # If the current directory is 'Train' or 'Test', traverse through the class directories
        for class_dir in os.listdir(os.path.join(dataset_path, directory)):
            # Create the corresponding output directory to save the cropped images
            output_dir = os.path.join(output_path, directory, class_dir)
            os.makedirs(output_dir, exist_ok=True)
            
            # Traverse through the images in the class directory and crop each image
            for filename in os.listdir(os.path.join(dataset_path, directory, class_dir)):
                # Open the image
                img = Image.open(os.path.join(dataset_path, directory, class_dir, filename))
                
                # Crop the image to remove padding from all sides
                cropped_img = img.crop((2, 2, 30, 30))
                
                # Save the cropped image to the output directory
                cropped_img.save(os.path.join(output_dir, filename))
