TEST(SqrtTest, Simple) {
  EXPECT_EQ(sqrt(4), 2);
}

TEST(SqrtTest, Negative) {
  EXPECT_THROW(sqrt(-1), std::runtime_error);
}
