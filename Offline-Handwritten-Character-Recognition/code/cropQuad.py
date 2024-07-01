from PIL import Image

# Open the image
img = Image.open('cropped_image.png')

cropped_img = img.crop((14,7,28,21))

# Save the cropped image
cropped_img.save('rm_cropped1340.png')