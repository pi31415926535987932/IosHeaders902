/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCache;

@interface ABMemberNameViewCache : NSObject {

	NSCache* _styleProvidersCache;

}
+(id)sharedInstance;
-(id)memberNameRegularFontForStyleProvider:(id)arg1 ;
-(id)regularTextAttributesForStyleProvider:(id)arg1 ;
-(id)boldTextAttributesForStyleProvider:(id)arg1 ;
-(id)placeholderTextAttributesForStyleProvider:(id)arg1 ;
-(id)_cacheForStyleProvider:(id)arg1 ;
-(id)memberNameBoldFontForStyleProvider:(id)arg1 ;
-(id)memberNamePlaceholderFontForStyleProvider:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
