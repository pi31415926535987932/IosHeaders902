/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface MPStorePlayWhileDownloadSession : NSObject <NSCopying> {

	NSURL* _destinationURL;
	NSDictionary* _purchaseBundle;
	NSURL* _sourceURL;
	unsigned long long _downloadToken;

}

@property (nonatomic,copy) NSURL * destinationURL;                          //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) unsigned long long downloadToken;              //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,copy) NSDictionary * purchaseBundle;                   //@synthesize purchaseBundle=_purchaseBundle - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                               //@synthesize sourceURL=_sourceURL - In the implementation block
-(unsigned long long)downloadToken;
-(void)setDownloadToken:(unsigned long long)arg1 ;
-(NSDictionary *)purchaseBundle;
-(void)setPurchaseBundle:(NSDictionary *)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
@end

