/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CPLItemChange : CPLRecordChange <NSSecureCoding, NSCopying> {

	NSArray* _containerRelations;

}

@property (nonatomic,copy) NSArray * containerRelations;              //@synthesize containerRelations=_containerRelations - In the implementation block
+(char)cplShouldIgnorePropertyForCoding:(id)arg1 ;
-(id)init;
-(id)propertiesForChangeType:(unsigned)arg1 ;
-(id)containerRelationChangesComparedToRelationEnumerator:(id)arg1 error:(id*)arg2 ;
-(NSArray *)containerRelations;
-(void)setContainerRelations:(NSArray *)arg1 ;
@end

