/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationLibraryConfiguration : NSObject <NSCopying> {
    BOOL  _allowConcurrentLoading;
    Class  _applicationInfoClass;
    id /* block */  _installedApplicationFilter;
    id /* block */  _placeholderFilter;
}

@property (nonatomic) BOOL allowConcurrentLoading;
@property (nonatomic, retain) Class applicationInfoClass;
@property (nonatomic, copy) id /* block */ installedApplicationFilter;
@property (nonatomic, copy) id /* block */ placeholderFilter;

- (BOOL)allowConcurrentLoading;
- (Class)applicationInfoClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id /* block */)installedApplicationFilter;
- (id /* block */)placeholderFilter;
- (void)setAllowConcurrentLoading:(BOOL)arg1;
- (void)setApplicationInfoClass:(Class)arg1;
- (void)setInstalledApplicationFilter:(id /* block */)arg1;
- (void)setPlaceholderFilter:(id /* block */)arg1;

@end
