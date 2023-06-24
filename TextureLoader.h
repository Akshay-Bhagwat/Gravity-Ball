#pragma once
#pragma once
#include <string>
#include <glew.h>

class TextureLoader
{
public:
	TextureLoader();
	~TextureLoader();

	GLuint getTextureID(std::string  texFileName);

};
