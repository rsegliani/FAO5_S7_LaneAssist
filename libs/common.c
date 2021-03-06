
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}vector<Point2f> slidingWindow(Mat image, Rect window)
{
    vector<Point2f> points;
    const Size imgSize = image.size();
    bool shouldBreak = false;
    
    while (true)
    {
        float currentX = window.x + window.width * 0.5f;
        
        Mat roi = image(window); //Extract region of interest         vector<Point2f> locations;
        
        findNonZero(roi, locations); //Get all non-black pixels. All are white in our case         
        float avgX = 0.0f;
        
        for (int i = 0; i < locations.size(); ++i) //Calculate average X position         {
            float x = locations[i].x;
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        
        //Move the window up         window.y -= window.height;
        
        //For the uppermost position         if (window.y < 0)
        {
            window.y = 0;
            shouldBreak = true;
        }
        
        //Move x position         window.x += (point.x - currentX);
        
        //Make sure the window doesn't overflow, we get an error if we try to get data outside the matrix         if (window.x < 0)
            window.x = 0;
        if (window.x + window.width >= imgSize.width)
            window.x = imgSize.width - window.width - 1;
        
        if (shouldBreak)
            break;
    }
    
    return points;
}
            avgX += window.x + x;
        }
        
        avgX = locations.empty() ? currentX : avgX / locations.size();
        
        Point point(avgX, window.y + window.height * 0.5f);
        points.push_back(point);
        