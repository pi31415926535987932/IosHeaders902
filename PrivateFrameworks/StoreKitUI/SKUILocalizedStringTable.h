/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle, NSDictionary, NSString;

@interface SKUILocalizedStringTable : NSObject {

	NSBundle* _bundle;
	NSDictionary* _strings;
	NSString* _tableName;

}

@property (nonatomic,readonly) NSBundle * bundle;                 //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(id)localizedStringForKey:(id)arg1 ;
-(NSBundle *)bundle;
-(NSString *)tableName;
-(id)initWithBundle:(id)arg1 localeName:(id)arg2 tableName:(id)arg3 ;
-(id)_legacyLanguageNameForLanguageCode:(id)arg1 ;
@end

