/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface MCBook : NSObject <NSCopying> {

	NSString* _author;
	NSString* _title;
	NSString* _kind;
	NSString* _fullPath;
	NSString* _version;
	NSString* _persistentID;
	NSNumber* _iTunesStoreID;
	NSString* _buyParams;
	NSString* _state;
	NSNumber* _downloadIdentifier;
	MCBook* _previousVersion;

}

@property (nonatomic,copy) NSString * author;                            //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * kind;                              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * fullPath;                          //@synthesize fullPath=_fullPath - In the implementation block
@property (nonatomic,copy) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * persistentID;                      //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) NSNumber * iTunesStoreID;                   //@synthesize iTunesStoreID=_iTunesStoreID - In the implementation block
@property (nonatomic,copy) NSString * buyParams;                         //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,retain) NSString * state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSNumber * downloadIdentifier;              //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,retain) MCBook * previousVersion;                   //@synthesize previousVersion=_previousVersion - In the implementation block
-(NSNumber *)downloadIdentifier;
-(void)setKind:(NSString *)arg1 ;
-(NSString *)persistentID;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSString *)kind;
-(id)initWithManifestDictionary:(id)arg1 ;
-(void)setFullPath:(NSString *)arg1 ;
-(NSNumber *)iTunesStoreID;
-(void)setITunesStoreID:(NSNumber *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(void)setDownloadIdentifier:(NSNumber *)arg1 ;
-(id)manifestDictionary;
-(void)updateBookAttributesByCopyingFromBook:(id)arg1 ;
-(MCBook *)previousVersion;
-(void)setPreviousVersion:(MCBook *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)author;
-(NSString *)fullPath;
-(id)friendlyName;
-(void)setPersistentID:(NSString *)arg1 ;
@end

