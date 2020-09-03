#pragma once
#include <d3d11.h>

class IndexBuffer
{
public:
	IndexBuffer();
	bool load(void* list_indices, UINT size_indices);
	UINT getSizeIndexList();
	bool release();
	~IndexBuffer();

private:

	UINT m_size_list;
	ID3D11Buffer* m_buffer;

	friend class DeviceContext;
};

