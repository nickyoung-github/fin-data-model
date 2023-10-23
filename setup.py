from setuptools import find_packages, setup

# ToDo: Add versioneer

with open("README.md", "r") as fh:
    long_description = fh.read()

setup(name="fin_data_model",
      version="0.0.1",
      description="Financial Data Model",
      author="Nick Young",
      license=r"https://www.apache.org/licenses/LICENSE-2.0",
      long_description=long_description,
      long_description_content_type="text/markdown",
      packages=find_packages(),
      include_package_data=True,
      install_requires=[
          "pydantic_bind",
      ],
      classifiers=[
          "Programming Language :: Python :: 3",
          "Programming Language :: Python :: 3.11",
          "Operating System :: OS Independent",
          "License :: OSI Approved :: Apache Software License"
      ])
