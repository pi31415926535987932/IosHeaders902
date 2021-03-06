/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:22:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKPath : NSObject {

	PolylinePathway* _pathway;
	char _cyclical;
	float _radius;

}

@property (assign,nonatomic) float radius; 
@property (assign,getter=isCyclical,nonatomic) char cyclical; 
@property (readonly) unsigned numPoints; 
+(id)pathWithPoints:(8*)arg1 count:(unsigned long)arg2 radius:(float)arg3 cyclical:(char)arg4 ;
+(id)pathWithGraphNodes:(id)arg1 radius:(float)arg2 ;
-(PolylinePathway*)pathway;
-(id)initWithPoints:(8*)arg1 count:(unsigned long)arg2 radius:(float)arg3 cyclical:(char)arg4 ;
-(id)initWithGraphNodes:(id)arg1 radius:(float)arg2 ;
-(unsigned)numPoints;
-(void)setCyclical:(char)arg1 ;
-(char)isCyclical;
-(char)cyclical;
-(id)init;
-(1)pointAtIndex:(unsigned)arg1 ;
-(void)setRadius:(float)arg1 ;
-(float)radius;
@end

