//#include "pch.h"
#include <gtest/gtest.h>

extern "C" {
#include "../TrisBasiques/tris.h"



    // Test pour triBulle avec un tableau inversé
    TEST(TriBulle, Reversed) {
        int t[4] = { 10, 5, 3, 1 };

        int ret = triBulle(t, 4);

        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, t[0]);
        EXPECT_EQ(3, t[1]);
        EXPECT_EQ(5, t[2]);
        EXPECT_EQ(10, t[3]);
    }

    // Test pour triBulle avec un tableau déjà trié
    TEST(TriBulle, AlreadySorted) {
        int t[4] = { 1, 3, 5, 10 };

        int ret = triBulle(t, 4);

        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, t[0]);
        EXPECT_EQ(3, t[1]);
        EXPECT_EQ(5, t[2]);
        EXPECT_EQ(10, t[3]);
    }

    // Test pour triBulle avec un tableau non trié
    TEST(TriBulle, Unsorted) {
        int t[4] = { 3, 1, 10, 5 };

        int ret = triBulle(t, 4);

        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, t[0]);
        EXPECT_EQ(3, t[1]);
        EXPECT_EQ(5, t[2]);
        EXPECT_EQ(10, t[3]);
    }


    // Test pour triBulle avec un tableau inversé
    TEST(TriBulleOpt, Reversed) {
        int t[4] = { 10, 5, 3, 1 };

        int ret = triBulle(t, 4);

        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, t[0]);
        EXPECT_EQ(3, t[1]);
        EXPECT_EQ(5, t[2]);
        EXPECT_EQ(10, t[3]);
    }

    // Test pour triBulle avec un tableau déjà trié
    TEST(TriBulleOpt, AlreadySorted) {
        int t[4] = { 1, 3, 5, 10 };

        int ret = triBulle(t, 4);

        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, t[0]);
        EXPECT_EQ(3, t[1]);
        EXPECT_EQ(5, t[2]);
        EXPECT_EQ(10, t[3]);
    }

    // Test pour triBulle avec un tableau non trié
    TEST(TriBulleOpt, Unsorted) {
        int t[4] = { 3, 1, 10, 5 };

        int ret = triBulle(t, 4);

        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, t[0]);
        EXPECT_EQ(3, t[1]);
        EXPECT_EQ(5, t[2]);
        EXPECT_EQ(10, t[3]);
    }
    // Test pour triNaif avec un tableau inversé
    TEST(TriNaif, Reversed) {
        int t[4] = { 10, 5, 3, 1 };

        int ret = triNaif(t, 4);

        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, t[0]);
        EXPECT_EQ(3, t[1]);
        EXPECT_EQ(5, t[2]);
        EXPECT_EQ(10, t[3]);
    }

    // Test pour triNaif avec un tableau déjà trié
    TEST(TriNaif, AlreadySorted) {
        int t[4] = { 1, 3, 5, 10 };

        int ret = triNaif(t, 4);

        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, t[0]);
        EXPECT_EQ(3, t[1]);
        EXPECT_EQ(5, t[2]);
        EXPECT_EQ(10, t[3]);
    }

    TEST(TriSelection, Reversed) {
        int t[] = { 10, 5, 3, 1 };
        int ret = TriSelection(t, 4);
        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, *(t));
        EXPECT_EQ(3, *(t + 1));
        EXPECT_EQ(5, *(t + 2));
        EXPECT_EQ(10, *(t + 3));
    }

    TEST(TriSelection, AlreadySorted) {
        int t[] = { 1, 3, 5, 10 };
        int ret = TriSelection(t, 4);
        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, *(t));
        EXPECT_EQ(3, *(t + 1));
        EXPECT_EQ(5, *(t + 2));
        EXPECT_EQ(10, *(t + 3));
    }

    TEST(TriSelection, Unsorted) {
        int t[] = { 4, 1, 3, 2 };
        int ret = TriSelection(t, 4);
        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, *(t));
        EXPECT_EQ(2, *(t + 1));
        EXPECT_EQ(3, *(t + 2));
        EXPECT_EQ(4, *(t + 3));
    }

    /// Test pour TriInsertionSequentiel
    TEST(TriInsertionSequentiel, Reversed) {
        int t[] = { 10, 5, 3, 1 };
        int ret = TriInsertionSequentiel(t, 4);
        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, *(t));
        EXPECT_EQ(3, *(t + 1));
        EXPECT_EQ(5, *(t + 2));
        EXPECT_EQ(10, *(t + 3));
    }

    TEST(TriInsertionSequentiel, AlreadySorted) {
        int t[] = { 1, 3, 5, 10 };
        int ret = TriInsertionSequentiel(t, 4);
        EXPECT_EQ(EXIT_SUCCESS, ret);
    }

    TEST(TriInsertionSequentiel, Unsorted) {
        int t[] = { 4, 1, 3, 2 };
        int ret = TriInsertionSequentiel(t, 4);
        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, *(t));
        EXPECT_EQ(2, *(t + 1));
        EXPECT_EQ(3, *(t + 2));
        EXPECT_EQ(4, *(t + 3));
    }

    /// Test pour TriInsertionDichotomique
    TEST(TriInsertionDichotomique, Reversed) {
        int t[] = { 10, 5, 3, 1 };
        int ret = TriInsertionDichotomique(t, 4);
        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, *(t));
        EXPECT_EQ(3, *(t + 1));
        EXPECT_EQ(5, *(t + 2));
        EXPECT_EQ(10, *(t + 3));
    }

    TEST(TriInsertionDichotomique, AlreadySorted) {
        int t[] = { 1, 3, 5, 10 };
        int ret = TriInsertionDichotomique(t, 4);
        EXPECT_EQ(EXIT_SUCCESS, ret);
    }

    TEST(TriInsertionDichotomique, Unsorted) {
        int t[] = { 4, 1, 3, 2 };
        int ret = TriInsertionDichotomique(t, 4);
        EXPECT_EQ(EXIT_SUCCESS, ret);
        EXPECT_EQ(1, *(t));
        EXPECT_EQ(2, *(t + 1));
        EXPECT_EQ(3, *(t + 2));
        EXPECT_EQ(4, *(t + 3));
    }

}