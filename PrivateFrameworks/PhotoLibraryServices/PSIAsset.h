/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PSIAsset : NSObject <NSCopying> {

	NSString* _uuid;
	NSArray* _contentStrings;
	CFArrayRef _categories;
	CFArrayRef _owningCategories;

}

@property (setter=setUUID:,nonatomic,copy) NSString * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain,readonly) NSArray * contentStrings;                 //@synthesize contentStrings=_contentStrings - In the implementation block
@property (nonatomic,retain,readonly) CFArrayRef categories;                    //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain,readonly) CFArrayRef owningCategories;              //@synthesize owningCategories=_owningCategories - In the implementation block
-(NSArray *)contentStrings;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFArrayRef)categories;
-(void)clear;
-(NSString *)uuid;
-(void)reverse;
-(void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)setUUID:(id)arg1 ;
-(id)_initForCopy:(char)arg1 ;
-(CFArrayRef)owningCategories;
@end
