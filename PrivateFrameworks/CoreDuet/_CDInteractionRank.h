/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface _CDInteractionRank : NSObject {

	NSSet* _reasons;
	double _score;

}

@property (assign) double score;                 //@synthesize score=_score - In the implementation block
@property (retain) NSSet * reasons;              //@synthesize reasons=_reasons - In the implementation block
-(double)score;
-(void)setReasons:(NSSet *)arg1 ;
-(void)setScore:(double)arg1 ;
-(NSSet *)reasons;
@end
