# import numpy as np
# student_information = [['Aman', 95.5, "Male"], ['Sunny', 65.7, "Female"],
#  ['Monty', 85.1, "Male"], ['toni', 75.4, "Male"]]
# student_array=np.array(student_information)
# print(student_array)


# # List: Ordered, changeable, allows duplicate members
# a_list = [1, 2, 2, "3"]
# print("List:", a_list)

# # Tuple: Ordered, unchangeable, allows duplicate members
# a_tuple = (1, 2, 2, 3)
# print("Tuple:", a_tuple)

# # Set: Unordered, unindexed, no duplicate members
# a_set = {1, 2, 3, 3}  # Duplicate elements will be removed
# print("Set:", a_set)

# # Dictionary: Unordered (in Python 3.7+, insertion order is maintained), changeable, indexed, no duplicate keys
# a_dict = {
#     "ID": 1,
#     "Name": "Aysha",
#     "Email": "abc@gmail.com"
# }
# print("Dictionary:", a_dict)

# # Accessing and modifying dictionary values
# a_dict["Name"] = "Adiba"
# print("Updated Dictionary:", a_dict)




# # List: Ordered, Mutable (Changeable), Allows Duplicate Members
# a_list = [1, 2, 2, "3"]
# print("List:")
# print("  Ordered: Yes")
# print("  Mutable: Yes")
# print("  Allows Duplicates: Yes")
# print("  Example:", a_list)

# # Modifying the list to show mutability
# a_list.append(4)
# print("  After Modification:", a_list)
# print()


# # Tuple: Ordered, Immutable (Unchangeable), Allows Duplicate Members
# a_tuple = (1, 2, 2, 3)
# print("Tuple:")
# print("  Ordered: Yes")
# print("  Immutable: Yes")
# print("  Allows Duplicates: Yes")
# print("  Example:", a_tuple)


# # Trying to modify the tuple to show immutability (will raise an error if uncommented)
# # a_tuple[0] = 0

# print()


import numpy as np

# Step 1: Generate random weather data for 30 days
# Creating a random 30x3 array
weather_data = np.random.rand(30, 3)

# Scaling the values:
# Temperature: 15–35°C
weather_data[:, 0] = weather_data[:, 0] * (35 - 15) + 15

# Humidity: 30–80%
weather_data[:, 1] = weather_data[:, 1] * (80 - 30) + 30

# Wind Speed: 0–20 m/s
weather_data[:, 2] = weather_data[:, 2] * 20

# Step 2: Calculations

# Average temperature, humidity, and wind speed over the month
avg_temperature = np.mean(weather_data[:, 0])
avg_humidity = np.mean(weather_data[:, 1])
avg_wind_speed = np.mean(weather_data[:, 2])

# Maximum wind speed and the day it occurred
max_wind_speed = np.max(weather_data[:, 2])
max_wind_day = np.argmax(weather_data[:, 2]) + 1  # Adding 1 to represent day number

# Number of days with temperatures above 30°C
days_above_30C = np.sum(weather_data[:, 0] > 30)

# Step 3: Extract a subset of data (days 10 to 20) and find the variance for each column
subset_data = weather_data[9:20]  # days 10 to 20 (0-based index 9 to 19)
variance_temperature = np.var(subset_data[:, 0])
variance_humidity = np.var(subset_data[:, 1])
variance_wind_speed = np.var(subset_data[:, 2])

# Displaying the results
print("Weather Data (first 5 rows):\n", weather_data[:5])  # Showing a preview of data
print("\nAverage Temperature over the month: {:.2f}°C".format(avg_temperature))
print("Average Humidity over the month: {:.2f}%".format(avg_humidity))
print("Average Wind Speed over the month: {:.2f} m/s".format(avg_wind_speed))
print("\nMaximum Wind Speed: {:.2f} m/s, occurred on Day {}".format(max_wind_speed, max_wind_day))
print("Number of days with Temperature above 30°C:", days_above_30C)
print("\nVariance for Days 10 to 20:")
print("Temperature Variance: {:.2f}".format(variance_temperature))
print("Humidity Variance: {:.2f}".format(variance_humidity))
print("Wind Speed Variance: {:.2f}".format(variance_wind_speed))

