/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface WBSOpenSearchSchemaFetcher : NSObject {

	NSMutableSet* _openSearchDescriptionURLs;

}
+(id)sharedFetcher;
-(void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)arg1 ;
-(void)fetchOpenSearchDescriptionWithURL:(id)arg1 ;
@end

