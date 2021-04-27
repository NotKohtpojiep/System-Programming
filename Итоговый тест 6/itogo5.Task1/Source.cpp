enum Items
{
	HealPoison,
	Torch,
	Arrow,
	EndCount
};

int countTotalItems(int* itemsCount)
{
	int result = 0;
	for (int i = 0; i < Items::EndCount; ++i)
	{
		result += itemsCount[i];
	}
	return result;
}