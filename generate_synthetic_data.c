#include <stdio.h>

int main()
{
    //each slot is 5 mins
    int cnt = 0;
    float health_idx;
    float max = 0.0;
    float min = 3000000.0;
    float weights[] = { 0.02, 0.15, 0.08, 0.2, 0.3, 0.25 };
    FILE* fp;
    errno_t err = fopen_s(&fp, "output.txt", "w");

    //Laying time from 4 hours to 12 hours in steps of 30mins
    for (int lay = 48; lay <= 144; lay += 6)
    {
        //Standing time from 1 hour to 12 hours in steps of 30mins
        for (int stand = 12; stand <= 144; stand += 6)
        {
            //Sitting time from 1 hour to 14 hours in steps of 30mins
            for (int sit = 12; sit <= 168; sit += 6)
            {
                //Walking time from 1 hour to 4 hours in step of 15mins
                for (int walk = 12; walk <= 48; walk += 3)
                {
                    //Walking upstairs from 5 mins to 1 hour in steps of 5mins
                    for (int up = 1; up <= 12; up += 1)
                    {
                        //Walking downstairs from 5mins to 1 hour in steps of 5 mins
                        for (int down = 1; down <= 12; down += 1)
                        {
                            //Check if count is 24 hours
                            if ((lay + stand + sit + walk + up + down) == 288)
                            {
                                cnt++;
                                health_idx = weights[0] * lay + weights[1] * stand + weights[2] * sit + weights[3] * walk + weights[4] * up + weights[5] * down + 30;

                                fprintf(fp, "%d %d %d %d %d %d %d %f\n", cnt, lay * 300, stand * 300, sit * 300, walk * 300, up * 300, down * 300, health_idx);

                                //Update max health_idx
                                if (health_idx > max)
                                    max = health_idx;

                                //Update min health_idx
                                if (health_idx < min)
                                    min = health_idx;
                            }
                        }
                    }
                }
            }
        }
    }
    fclose(fp);
    printf("%d %f %f\n", cnt, max, min);
    return 0;
}
