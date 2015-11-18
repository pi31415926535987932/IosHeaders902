/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:22:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameplayKit/GKRandomDistribution.h>

@interface GKShuffledDistribution : GKRandomDistribution {

	int _delta;
	float _uniformDistance;
	int _lastInt;
	int _nextIntsCapacity;
	int _nextIntsCount;
	int* _nextInts;

}
-(int)nextInt;
-(id)initWithRandomSource:(id)arg1 lowestValue:(int)arg2 highestValue:(int)arg3 ;
-(float)uniformDistance;
-(void)setUniformDistance:(float)arg1 ;
-(id)initWithRandomSource:(id)arg1 lowestValue:(int)arg2 highestValue:(int)arg3 delta:(int)arg4 ;
-(void)dealloc;
@end
