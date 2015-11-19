/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSSet, ODRBundleManagedObject;

@interface ODRTagManagedObject : NSManagedObject

@property (nonatomic,retain) NSString * tagName; 
@property (nonatomic,retain) NSNumber * alwaysPreserve; 
@property (nonatomic,retain) NSNumber * preservationPriority; 
@property (nonatomic,retain) NSSet * assetPacks; 
@property (nonatomic,retain) ODRBundleManagedObject * bundle; 
+(id)tagsForBundleWithURL:(id)arg1 matchingTagsInSet:(id)arg2 error:(id*)arg3 ;
+(id)createTagWithName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)tagWithName:(id)arg1 forBundleWithURL:(id)arg2 ;
-(unsigned)dt_status;
-(void)setAndReflectPreservationPriority:(id)arg1 ;
-(void)setAndReflectAlwaysPreserve:(id)arg1 ;
-(id)assetPackSize;
-(id)percentageDownloaded;
@end

