/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Futhark/Futhark-Structs.h>
@class NSArray;

@interface FKTextFeature : NSObject {

	void* _backingObject;
	SCD_Struct_FK0* _session;
	int _scale;
	int _featureID;
	NSArray* _corners;
	int _type;
	NSArray* _subFeatures;
	CGRect _boundingBox;

}

@property (nonatomic,readonly) int featureID;                         //@synthesize featureID=_featureID - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                    //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,retain,readonly) NSArray * corners;              //@synthesize corners=_corners - In the implementation block
@property (nonatomic,readonly) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * subFeatures;                   //@synthesize subFeatures=_subFeatures - In the implementation block
+(id)featureFromConcomp:(concomp*)arg1 session:(SCD_Struct_FK0*)arg2 roiOffset:(CGPoint)arg3 dimensions:(CGSize)arg4 type:(int)arg5 createDiacriticFeatures:(char)arg6 featureID:(int*)arg7 scale:(int)arg8 ;
+(id)featureFromSequenceIndex:(int)arg1 session:(SCD_Struct_FK0*)arg2 roiOffset:(CGPoint)arg3 dimensions:(CGSize)arg4 createConcompFeatures:(char)arg5 createDiacriticFeatures:(char)arg6 featureID:(int*)arg7 scale:(int)arg8 ;
-(NSArray *)subFeatures;
-(int)featureID;
-(void)dealloc;
-(int)type;
-(NSArray *)corners;
-(CGRect)boundingBox;
-(void)setSubFeatures:(NSArray *)arg1 ;
-(id)initWithType:(int)arg1 boundingBox:(CGRect*)arg2 corners:(id)arg3 featureID:(int)arg4 session:(SCD_Struct_FK0*)arg5 backingObject:(void*)arg6 scale:(int)arg7 ;
@end

