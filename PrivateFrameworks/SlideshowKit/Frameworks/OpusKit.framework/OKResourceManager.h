/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OFLRUCache, OKPresentationViewControllerProxy, NSArray;

@interface OKResourceManager : NSObject {

	OFLRUCache* _resources;
	OKPresentationViewControllerProxy* _presentationViewController;
	NSArray* _resourceLoaders;

}
-(void)dealloc;
-(id)initWithPresentationViewController:(id)arg1 ;
-(id)resourceLoaderForURL:(id)arg1 ;
-(id)resourceWithURL:(id)arg1 copy:(char)arg2 ;
@end

