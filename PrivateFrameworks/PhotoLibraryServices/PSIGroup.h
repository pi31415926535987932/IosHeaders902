/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSIReusableObject.h>

@class NSMutableString, NSString;

@interface PSIGroup : PSIReusableObject {

	NSMutableString* _contentString;
	unsigned long long _compressedRanges[2];
	NSRange _tokenRanges[8];
	unsigned _tokenRangesCount;
	short _category;
	CFArrayRef _assetIds;
	unsigned long long _groupId;
	unsigned long long _owningGroupId;

}

@property (assign,nonatomic) unsigned long long groupId;                     //@synthesize groupId=_groupId - In the implementation block
@property (assign,nonatomic) unsigned long long owningGroupId;               //@synthesize owningGroupId=_owningGroupId - In the implementation block
@property (assign,nonatomic) short category;                                 //@synthesize category=_category - In the implementation block
@property (nonatomic,retain,readonly) NSString * contentString;              //@synthesize contentString=_contentString - In the implementation block
@property (nonatomic,retain) CFArrayRef assetIds;                            //@synthesize assetIds=_assetIds - In the implementation block
+(void)_getTokenRanges:(NSRange)arg1 fromCompressedRanges:(unsigned long long)arg2 ;
+(void)getCompressedRanges:(unsigned long long)arg1 fromTokenRanges:(SCD_Struct_PS22*)arg2 count:(long)arg3 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setCategory:(short)arg1 ;
-(short)category;
-(void)prepareForReuse;
-(NSString *)contentString;
-(void)setGroupId:(unsigned long long)arg1 ;
-(unsigned long long)groupId;
-(void)prepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(int)compareToGroup:(id)arg1 ;
-(unsigned)tokenRangesCount;
-(NSRange)tokenRangeAtIndex:(unsigned)arg1 ;
-(unsigned long long)owningGroupId;
-(void)setOwningGroupId:(unsigned long long)arg1 ;
-(CFArrayRef)assetIds;
-(void)setAssetIds:(CFArrayRef)arg1 ;
@end

